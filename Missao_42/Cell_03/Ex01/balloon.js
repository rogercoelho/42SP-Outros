const balao = document.getElementById('balao');
const maxSize = 420;
const minSize = 200;
const colors = ['red', 'green', 'blue'];

let size = minSize;
let colorIndex = 0;

const updateBalloon = () => {
    balao.style.width = `${size}px`;
    balao.style.height = `${size}px`;
    balao.style.backgroundColor = colors[colorIndex];
};

balao.addEventListener('click', () => {
    if (size >= maxSize) size = minSize;

    size = Math.min(size + 10, maxSize);
    colorIndex = (colorIndex + 1) % colors.length;
    updateBalloon();
});

balao.addEventListener('mouseleave', () => {
    size = Math.max(size - 5, minSize);
    colorIndex = (colorIndex - 1 + colors.length) % colors.length;
    updateBalloon();
    if (size === minSize) {
        alert('Cheguei no tamanho minimo, clique em mim para aumentar!');
    }
});