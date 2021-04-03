let fs = require('fs');


let Student1 = {name:"Arnold",age:"73"};
let Student2 = {name:"Sylvester",age:"74"};
let Student3 = {name:"Dolph",age:"63"};

let StudentArray=[];
StudentArray.push(Student1);
StudentArray.push(Student2);
StudentArray.push(Student3);

fs.writeFile('students.txt',`Name,Age\n`,function foo(err) {
    if(err) throw err;
    console.log('students');
})

for(let i = 0; i < StudentArray.length; i++){
    fs.appendFile('students.txt',`${StudentArray[i].name},${StudentArray[i].age}\n`,function foo(err) {
        if(err) throw err;
    })
}
