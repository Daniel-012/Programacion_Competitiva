// 10 Puntos
// function getGiftsToRefill(a1, a2, a3) {
//   const a = a1.concat(a2).concat(a3);
//   const newArr = a.filter((item, index) => a.indexOf(item) === index);

//   const count = [];
//   for (const v of newArr) {
//     if (
//       (!a1.includes(v) && !a2.includes(v)) ||
//       (!a2.includes(v) && !a3.includes(v)) ||
//       (!a1.includes(v) && !a3.includes(v))
//     ) {
//       count.push(v);
//     }
//   }

//   return count;
// }

// 80 Puntos
// function getGiftsToRefill(a1, a2, a3) {
//   //   const a = a1.concat(a2).concat(a3);
//   const newArr = [...new Set([...a1, ...a2, ...a3])];

//   const count = [];
//   for (const e of newArr) {
//     if (a1.includes(e) + a2.includes(e) + a3.includes(e) === 1) {
//       count.push(e);
//     }
//   }

//   return count;
// }

// 290 Puntos
function getGiftsToRefill(a1, a2, a3) {
  return [...new Set([...a1, ...a2, ...a3])].filter(e => a1.includes(e) + a2.includes(e) + a3.includes(e) === 1 );
}

const a1 = ["bici", "coche", "bici", "bici"];
const a2 = ["coche", "bici", "muñeca", "coche"];
const a3 = ["bici", "pc", "pc"];

console.log(getGiftsToRefill(a1, a2, a3));
