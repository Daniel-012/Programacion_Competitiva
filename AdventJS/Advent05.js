// // 121 Puntos
// let count = 0;

// const subsetSum = (numbers, target, maxi, partial) => {
//   let s, n, remaining;

//   partial = partial || [];

//   // sum partial
//   s = partial.reduce((a, b) => a + b, 0);

//   if (s >= count && s <= target && partial.length <= maxi) {
//     count = s;
//   }

//   for (let i = 0; i < numbers.length; i++) {
//     n = numbers[i];
//     remaining = numbers.slice(i + 1);
//     subsetSum(remaining, target, maxi, partial.concat([n]));
//   }
// };

// console.log(subsetSum([12, 3, 11, 5, 7], 20, 3), "-> ", count);

// 115 Puntos
function getMaxGifts(giftsCities, maxGifts, maxCities) {
  let count = 0;

  const BFS = (i, sum, items) => {
    console.log(i, " -> ", sum, " - ", items);

    if (sum <= maxGifts && sum >= count && items <= maxCities) {
      count = sum;
    }
    if (sum > maxGifts || items > maxCities) {
        return 0;
      }
    if (i >= giftsCities.length) {
      return 0;
    }

    BFS(i + 1, sum + giftsCities[i], items + 1);
    BFS(i + 1, sum, items);
    // console.log(i, " -> ", sum);
    //   console.log(i, " -> ", a, b);
    //   return a;
  };

  BFS(0, 0, 0);

  return count;
}
console.log(getMaxGifts([12, 3, 11, 5, 7], 20, 3));
