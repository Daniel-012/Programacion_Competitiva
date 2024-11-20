let combinaciones = [
  "000 URURD",
  "1111 UUURUUU",
  "9999 LULULULD",
  "528934712834 URDURUDRUDLLLLUUDDUDUDUDLLRRRR",
];

const Descifrado = (combinacion) => {
  let numeros = combinacion.split(" ")[0].split("");
  let letras = combinacion.split(" ")[1];
  let position = 0;

  for (let i = 0; i < letras.length; i++) {
    if (letras[i] == "U") {
      //   console.log("aqui u");

      if (numeros[position] == "9") {
        numeros[position] = "0";
      } else {
        // console.log(numeros);
        numeros[position] = Number(numeros[position]) + 1;
      }
    } else if (letras[i] == "D") {
      if (numeros[position] == "0") {
        numeros[position] = "9";
      } else {
        // console.log(numeros);
        numeros[position] = Number(numeros[position]) - 1;
      }
    } else if (letras[i] == "R") {
      position = (position + 1) % letras.length;
    } else if (letras[i] == "L") {
      //   console.log("aqui l");

      if (position == 0) {
        position = numeros.length - 1;
      } else {
        position -= 1;
      }
    }
  }

  return numeros.join("");
};

console.log(Descifrado(combinaciones[3]));
