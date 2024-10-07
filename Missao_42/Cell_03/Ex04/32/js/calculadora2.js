const calculate = (n1, operator, n2) => {
  const firstNum = parseFloat(n1);
  const secondNum = parseFloat(n2);
  if (operator === 'add') return firstNum + secondNum;
  if (operator === 'subtract') return firstNum - secondNum;
  if (operator === 'multiply') return firstNum * secondNum;
  if (operator === 'divide') return firstNum / secondNum;
}

const getKeyType = key => {
  const action = key.data('action');
  if (!action) return 'number';
  if (
      action === 'add' ||
      action === 'subtract' ||
      action === 'multiply' ||
      action === 'divide'
  ) return 'operator';
  return action;
}

const createResultString = (key, displayedNum, state) => {
  const keyContent = key.text();
  const keyType = getKeyType(key);
  const {
      firstValue,
      operator,
      modValue,
      previousKeyType
  } = state;

  if (keyType === 'number') {
      return displayedNum === '0' ||
          previousKeyType === 'operator' ||
          previousKeyType === 'calculate'
          ? keyContent
          : displayedNum + keyContent;
  }

  if (keyType === 'decimal') {
      if (!displayedNum.includes('.')) return displayedNum + '.';
      if (previousKeyType === 'operator' || previousKeyType === 'calculate') return '0.';
      return displayedNum;
  }

  if (keyType === 'operator') {
      return firstValue &&
          operator &&
          previousKeyType !== 'operator' &&
          previousKeyType !== 'calculate'
          ? calculate(firstValue, operator, displayedNum)
          : displayedNum;
  }

  if (keyType === 'clear') return 0;

  if (keyType === 'calculate') {
      return firstValue
          ? previousKeyType === 'calculate'
              ? calculate(displayedNum, operator, modValue)
              : calculate(firstValue, operator, displayedNum)
          : displayedNum;
  }
}

const updateCalculatorState = (key, calculator, calculatedValue, displayedNum) => {
  const keyType = getKeyType(key);
  const state = calculator.data();

  calculator.data('previousKeyType', keyType);

  if (keyType === 'operator') {
      calculator.data('operator', key.data('action'));
      calculator.data('firstValue', state.firstValue &&
          state.operator &&
          state.previousKeyType !== 'operator' &&
          state.previousKeyType !== 'calculate'
          ? calculatedValue
          : displayedNum);
  }

  if (keyType === 'calculate') {
      calculator.data('modValue', state.firstValue && state.previousKeyType === 'calculate'
          ? state.modValue
          : displayedNum);
  }

  if (keyType === 'clear' && key.text() === 'AC') {
      calculator.data('firstValue', '');
      calculator.data('modValue', '');
      calculator.data('operator', '');
      calculator.data('previousKeyType', '');
  }
}

const updateVisualState = (key, calculator) => {
  const keyType = getKeyType(key);
  key.siblings().removeClass('is-depressed');

  if (keyType === 'operator') key.addClass('is-depressed');
  if (keyType === 'clear' && key.text() !== 'AC') key.text('AC');
  if (keyType !== 'clear') {
      const clearButton = calculator.find('[data-action=clear]');
      clearButton.text('CE');
  }
}

const calculator = $('.calculator');
const display = calculator.find('.calculator__display');
const keys = calculator.find('.calculator__keys');

keys.on('click', 'button', function(e) {
  const key = $(this);
  const displayedNum = display.text();
  const resultString = createResultString(key, displayedNum, calculator.data());

  display.text(resultString);
  updateCalculatorState(key, calculator, resultString, displayedNum);
  updateVisualState(key, calculator);
});