// Declara uma variável que recebe nome (string) e idade (string ou number)
function sayMyNameAndAge(name: string, age: string | number) {
    console.log(`My name is ${name} and I'm ${age} years old`)
  };
  
  sayMyNameAndAge('Rafael', 18); // OK
  sayMyNameAndAge('Rafael', '18'); // OK
  