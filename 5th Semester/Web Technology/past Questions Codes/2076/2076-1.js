// To create objects in JavaScript, you typically use either object literal notation {} or constructor functions with the new keyword. 
// Object using object literal notation
let car = {
    brand: "Toyota",
    model: "Camry",
    year: 2022,
    color: "Silver",
    displayInfo: function() {
        return `${this.brand} ${this.model}, ${this.year}, ${this.color}`;
    }
};

// Accessing object properties
console.log(car.brand); // Output: Toyota
console.log(car.displayInfo()); // Output: Toyota Camry, 2022, Silver
