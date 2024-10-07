const input = document.getElementById("text1");
input.addEventListener("keyup", function(event) {
    if (event.key === 13) {
        event.preventDefault();
        task();
    }
})

let arr = [];

if (typeof(Storage) !== "undefined") {
    const existing = JSON.parse(localStorage.getItem('user')) || [];
    console.log(existing);
    if (existing) {
        arr = [...existing];
    }
    for (let i = 0; i < existing.length; i++) {
        createTask(existing[i].id, existing[i].data, true);
    }
}

function task() {
    const text = document.getElementById("text1");
    if (text.value === '') {
        alert("Campo vazio. Escreva algo.");
    } else {
        const uniq = 'id' + (new Date()).getTime();
        createTask(uniq, text.value, false);
        const obj = {
            data: text.value,
            id: uniq,
            check: 0
        };
        arr.push(obj);
        localStorage.setItem('user', JSON.stringify(arr));
        text.value = '';
    }
}

function createTask(uniq, text, refreshCheck) {
    const checkbox = document.createElement('input');
    const div = document.createElement('div');
    const p = document.createElement('p');
    const area = document.getElementById('areaa'); // Certifique-se de que a área está definida

    checkbox.setAttribute("type", "checkbox");
    checkbox.className = uniq;
    div.id = "reminders";
    checkbox.id = "x";
    p.id = uniq;

    if (refreshCheck === true) {
        if (existing[i].check === 1) {
            checkbox.checked = true;
            p.style.textDecoration = "line-through";
        }
    }

    p.className = "p";
    div.appendChild(checkbox);
    p.appendChild(document.createTextNode(text));
    const delete_btn = document.createElement('button');
    delete_btn.innerText = "DELETE";
    delete_btn.id = "del";
    delete_btn.className = uniq;
    div.appendChild(p);
    div.appendChild(delete_btn);
    area.appendChild(div);

    delete_btn.onclick = function() {
        del.call(this);
    }
    checkbox.onclick = function() {
        ischeck.call(this);
    }
}

function del() {
    this.parentNode.remove();
    for (let k = 0; k < arr.length; k++) {
        if (arr[k].id === this.className) {
            arr.splice(k, 1);
            localStorage.setItem('user', JSON.stringify(arr));
            break;
        }
    }
}

function ischeck() {
    if (this.checked === true) {
        document.getElementById(this.className).style.textDecoration = "line-through";
        for (let k = 0; k < arr.length; k++) {
            if (arr[k].id === this.className) {
                arr[k].check = 1;
                localStorage.setItem('user', JSON.stringify(arr));
                break;
            }
        }
    } else {
        for (let k = 0; k < arr.length; k++) {
            if (arr[k].id === this.className) {
                arr[k].check = 0;
                localStorage.setItem('user', JSON.stringify(arr));
                break;
            }
        }
        document.getElementById(this.className).style.textDecoration = "none";
    }
}
