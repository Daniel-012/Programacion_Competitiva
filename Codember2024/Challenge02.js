// const texto = " 1 2 4 1 -2, 0 1 2 3 -1, 1 -2 5";

const texto =
  " 1 2 4 1 -2, 0 1 2 3 -1, 0 1 1 1, 1 2 3 4 -1, 0 0 1 1 1, 2 -1 0 2 1, 0 1 0 1, 3 0 -2 1, 1 1 1 1 1 1, 1 2 3 4 -1, 0 0 1 1 1, 2 -1 0 2 1, 0 1 0 1, 3 0 -2 1, 1 1 1 1 1 1, -1 0 1 -2 2, 1 2 4 1 -2, 0 1 2 3 -1, 0 1 1 1, -1 0 1 -2 2, 1 2 4 1 -2, 0 1 2 3 -1, 0 1 1 1, 1 2 3 4 -1, 0 0 1 1 1, 2 -1 0 2 1, 0 1 0 1, 3 0 -2 1, 1 1 1 1 1 1, -1 0 1 -2 2, 1 2 4 1 -2, 0 1 2 3 -1, 0 1 1 1, 1 2 3 4 -1, 0 0 1 1 1, 2 -1 0 2 1, 0 1 0 1, 3 0 -2 1, 1 1 1 1 1 1, -1 0 1 -2 2, 1 2 4 1 -2, 0 1 2 3 -1, -1 0 1 -2 2, 1 2 4 1 -2, 0 1 2 3 -1, 0 1 1 1, 1 2 3 4 -1, 0 0 1 1 1, 2 -1 0 2 1, 0 1 0 1, 3 0 -2 1, 1 1 1 1 1 1, -1 0 1 -2 2, 1 2 4 1 -2, 0 1 2 3 -1, 0 1 1 1, 0 1 1 1, 1 2 3 4 -1, 0 0 1 1 1, 2 -1 0 2 1, 0 1 0 1, 3 0 -2 1, 1 1 1 1 1 1, -1 0 1 -2 2, 1 2 4 1 -2, 0 1 2 3 -1, 0 1 1 1, 1 2 3 4 -1, 0 0 1 1 1, 2 -1 0 2 1, 0 1 0 1, 3 0 -2 1, 1 1 1 1 1 1, -1 0 1 -2 2, 1 2 4 1 -2, 0 1 2 3 -1, 0 1 1 1, 1 2 3 4 -1, 0 0 1 1 1, 2 -1 0 2 1, -1 0 1 -2 2, 1 2 4 1 -2, 0 1 2 3 -1, 0 1 1 1, 1 2 3 4 -1, 0 0 1 1 1, 2 -1 0 2 1, 0 1 0 1, 3 0 -2 1, 1 1 1 1 1 1, -1 0 1 -2 2, 1 2 4 1 -2, 0 1 2 3 -1, 0 1 1 1, 0 1 0 1, 3 0 -2 1, 1 1 1 1 1 1, 1 0 1 0 1 0 1 0 1 4 5 6 7 8";

const movimientos = (table) => {
  let numeroDeMovientos = 0;
  let position = 0;
  table.shift();
  console.log('This is my table ' +table)

  while (position >= 0 && position < table.length) {
    numeroDeMovientos += 1;
    const numero = Number(table[position]);

    if (numero == 0) {
      table[position] = Number(table[position]) + 1;
    } else if (numero > 0) {
      table[position] = Number(table[position]) + 1;
      position += table[position] - 1;
    } else if (numero < 0) {
      table[position] = Number(table[position]) + 1;
      position += table[position] - 1;
    }
    
  }console.log(table, position,numeroDeMovientos, table.length);

  return numeroDeMovientos;
};

const suma = (cuadrilla) => {
  let suma = 0;
  for (let i = 0; i < cuadrilla.length; i++) {
    suma += movimientos(cuadrilla[i].split(" "));
  }

  return suma + "-" + movimientos(cuadrilla[cuadrilla.length - 1].split(" "));
};

const work = (tables) => {
  console.log(suma(tables));
};
// console.log(movimientos(tables[2].split(" ")));

work(texto.split(","));
