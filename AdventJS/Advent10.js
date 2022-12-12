function checkJump(heights) {
  let sub = true;
  let s = 0;
  let i = 0;
  while (i < heights.length) {
    if (i === heights.length - 1) {
      if (!sub && s >= 1) {
        return true;
      } else {
        return false;
      }
    }
    if (heights[i] <= heights[i + 1] && sub) {
      if (heights[i] < heights[i + 1]) {
        s += 1;
      }
     
    } else {
      sub = false;
      if (heights[i] < heights[i + 1]) {
        return false;
      }
    }

    i++;
  }
}

const a = [1, 4, 1];

console.log(checkJump(a));
