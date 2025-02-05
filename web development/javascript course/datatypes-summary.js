// # Primitive data type
// 7 types :String, Number, Boolean, null, undefined, symbol, BigInt

// Reference (Non primitive)
const id = Symbol('123')
const anotherid = Symbol('123')

// console.log(id === anotherid)


// Array 
const heros = ["a", "b", "c"];

// object declaration
let myobj={
    name:"Garv",
    age:20,
}

const myFunction = function(){
    console.log("Garv sharma");
}

// const name = "Garv"
// const repocount = 50
// console.log(`Hello my name is ${name} an my repo count is ${repocount}`);
const gameName = new String('Hitesh-hc') 
const anotherString = gameName.slice(-8,4)

// console.log(anotherString)

const newStringOne = "Garv"
// console.log(newStringOne.trim())  
newStringOne.trim()
console.log(newStringOne.includes('g'))

console.log(newStringOne.split(''))