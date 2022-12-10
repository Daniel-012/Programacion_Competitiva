function createCube(size) {
  let a = "";
  let r =size * 2;
  for (let i = 1; i <= r; i ++) {
    if (i <= size) {
      a += " ".repeat(size - i);
      a += "/\\".repeat(i);
      a += "_\\".repeat(size);
      a += "\n";
    } else {
      a += " ".repeat(i - 1- size);
      a += "\\/".repeat(r - i +1);
      a += "_/".repeat(size);
      a += "\n";
    }
  }

  return a.substring(0, a.length - 1);
}

console.log(createCube(1));
