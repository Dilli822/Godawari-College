
// the simplest examples for creating objects in JavaScript:

// 1. Object Literals
// javascript

let person = {
    name: "Alice",
    age: 25
};

console.log(person.name); // Output: Alice
console.log(person.age);  // Output: 25
// 2. Using the new Object() Syntax
// javascript

let person = new Object();
person.name = "Bob";
person.age = 30;

console.log(person.name); // Output: Bob
console.log(person.age);  // Output: 30
// 3. Constructor Function
// javascript

function Person(name, age) {
    this.name = name;
    this.age = age;
}

let person = new Person("Charlie", 35);

console.log(person.name); // Output: Charlie
console.log(person.age);  // Output: 35
// 4. ES6 Class
// javascript

class Person {
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }
}

let person = new Person("Diana", 40);

console.log(person.name); // Output: Diana
console.log(person.age);  // Output: 40
// 5. Using Object.create()
// javascript

let personPrototype = {
    greet: function() {
        return `Hello, my name is ${this.name}`;
    }
};

let person = Object.create(personPrototype);
person.name = "Eve";
person.age = 45;

console.log(person.greet()); // Output: Hello, my name is Eve
// These examples cover the simplest ways to create and work with objects in JavaScript.