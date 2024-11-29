const PRUEBA01 = 0;
const PRUEBA02 = 0;
const PRUEBA03 = [
  13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 31, 32, 33,
  34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 71, 72,
  73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 155, 156, 157,
  158, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 195, 196,
];

const primo = (numero) => {
  for (let i = 2; i < numero / 2 + 1; i++) {
    if (numero % i == 0) {
      return false;
    }
  }

  return true;
};
const sumaString = (entrada) => {
  let res = 0;

  entrada.toString().split("").forEach((c) => (res += parseInt(c)));
  return res;
};
const Nodos = (numeros) => {
  let count = 0;
  let thirt = 0;

  numeros.forEach((element,i) => {
    // console.log(i);
    
    if (primo(element)) {
      if (primo(sumaString(element))) {
        count++;
        console.log(element);

        if (count === 3){
          
          thirt = element;
        }
      }
    }
  });

  console.log("Total => ", count, "Tercero => ", thirt);

  return true;
};

console.log(Nodos(PRUEBA03));
