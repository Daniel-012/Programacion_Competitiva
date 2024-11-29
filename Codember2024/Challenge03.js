// const PRUEBA =  [[4, 6], [7, 9], [10, 12], [12, 16]];
// const PRUEBA = [[1, 2], [2, 3],[4, 5],];
// const PRUEBA = [[1, 2], [2, 3], [3, 4]];
// Este codigo falta arreglarlo mejor ya que funciona si los nodos estan ordenados
// Pero no funcionan si estan desordenados por ejemplo aqui bota 40 nodos a salvo pero
// La verdad es que son 35 porque 5 estan desordenados
const PRUEBA = [
  [1, 2],
  [2, 3],
  [3, 4],
  [5, 6],
  [7, 8],
  [9, 10],
  [11, 12],
  [13, 14],
  [15, 16],
  [17, 18],
  [19, 20],
  [21, 22],
  [23, 24],
  [25, 26],
  [27, 28],
  [31, 32],
  [33, 34],
  [35, 36],
  [37, 38],
  [39, 40],
  [41, 42],
  [43, 44],
  [45, 46],
  [47, 48],
  [49, 50],
  [71, 72],
  [73, 74],
  [75, 76],
  [77, 78],
  [79, 80],
  [81, 82],
  [83, 84],
  [85, 86],
  [87, 88],
  [155, 156],
  [157, 158],
  [175, 176],
  [177, 178],
  [179, 180],
  [181, 182],
  [183, 184],
  [195, 196],
  [197, 198],
  [198, 199],
  [199, 200],
  [2, 4],
  [4, 6],
  [6, 8],
  [8, 10],
  [10, 12],
];
const nodos = (matrix) => {
  // console.log(matrix, matrix.length);

  let newMatrix = [];
  let count = 0;

  for (let i = 0; i < matrix.length - 1; i++) {
    // console.log(matrix[i]);
    if (matrix[i][matrix[i].length - 1] !== matrix[i + 1][0]) {
      if ( i > 0 && matrix[i - 1][matrix[i - 1].length - 1] == matrix[i][0]) {
        count++;

        newMatrix.push(matrix[i + 1]);
        i++;
      } else {
        count++;
        newMatrix.push(matrix[i]);
      }
    }
  }
  console.log("Nodos => ", count, "Tama", matrix.length);

  for (let i = 0; i < newMatrix.length; i++) {
    for (let j = 0; j < newMatrix[i].length; j++) {
      console.log(newMatrix[i][j]);
    }
  }

  return true;
};

console.log(nodos(PRUEBA));
