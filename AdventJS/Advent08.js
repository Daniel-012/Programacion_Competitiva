// 80 Puntos
// function checkPart(part) {
//   for (let i = 0; i < part.length; i += 1) {
//     const sub = `${part.substring(0, i) + part.substring(i + 1, part.length)}`;
//     // console.log();
//     if (sub === sub.split("").reverse().join("")) {
//       return true;
//     }
//   }

//   return false;
// }

function checkPart(part) {
  part = part.split("");
  // console.log(part);
  return part.some((a, i) => {
    let sub = part.filter((_, y) => y != i);
    console.log(sub.join(), sub.reverse().join());

    return sub.join() === sub.reverse().join();
  });

}

// 200 Puntos
// function checkPart(part) {
//   return [...part].some((x, i,array) => {
//     let w = array.filter((_, y) => y!= i);
//     // console.log(w);
//     return w.join() === w.reverse().join();
//   })
// }

console.log(checkPart("lolol"));
