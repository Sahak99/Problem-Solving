let fs = require('fs');
let fData;

try {
  fData = fs.readFileSync('students.txt','UTF-8')
  console.log(fData);
} catch (err) {
  console.error(err)
}

let fileLength = fData.length;
let tokensArray = [];
let studentCounter = 0;
let tmp;

for(let i = 0; i < fileLength; i++){
  if(fData[i] == `\n` || fData[i] == ','){
    tokensArray[studentCounter] = tmp;
    tmp = '';
    studentCounter++;
  }
  else {
    tmp+=fData[i];
  }
}
parseInt
let studentsArray = [];

for(let i = 2; i < tokensArray.length-1; i+=2){
  let studentStruct = {Name:'',Age:0};
  studentStruct.Name = tokensArray[i];
  studentStruct.Age = parseInt(tokensArray[i+1]);
  studentsArray.push(studentStruct);
}

console.log(studentsArray);
