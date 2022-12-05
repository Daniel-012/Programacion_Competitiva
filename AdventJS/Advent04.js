// 15 Puntos
// function fitsInOneBox(boxes) {
//     const newArr = boxes.sort((a, b) => a.l - b.l);
//      for (let i = 0; i < newArr.length - 1; i += 1) {
//         if (newArr[i + 1].l <= newArr[i].l || newArr[i + 1].w <= newArr[i].w || newArr[i + 1].h <= newArr[i].h) {
//             return false;
//         }
//     }

//     return true;
// }

// 141 Puntos
// function fitsInOneBox(boxes) {
//     let a = -1,
//         b = -1,
//         c = -1;

//     for (const { l, w, h } of boxes.sort((a, b) => a.l - b.l)) {
//         if (l <= a || w <= b || h <= c) {
//             return false;
//         } else {
//             a = l;
//             b = w;
//             c = h;
//         }
//     }

//     return true;
// }

// 151 Puntos
function fitsInOneBox(boxes) {
    const newA = boxes.sort((a, b) => a.l - b.l);
    return newA.every((value, i, arr) => {
        if (i === boxes.length - 1) {
            return true;
        }
        if (value.l >= arr[i + 1].l || value.w >= arr[i + 1].w || value.h >= arr[i + 1].h) {
            return false;
        }

        return true;
    });
}

// 170 Puntos
function fitsInOneBox(boxes) {
    return boxes
        .sort((a, b) => a.l - b.l)
        .every((value, i, arr) => {
            if (i === boxes.length - 1) {
                return true;
            }
            if (value.l >= arr[i + 1].l || value.w >= arr[i + 1].w || value.h >= arr[i + 1].h) {
                return false;
            }

            return true;
        });
}

console.log(
    fitsInOneBox([
        { l: 1, w: 1, h: 1 },
        { l: 2, w: 2, h: 2 }
    ])
);
