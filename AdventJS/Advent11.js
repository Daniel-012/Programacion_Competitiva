function getCompleted(part, total) {
  const gcd = (a, b) => {
    if (!b) return a;
    return gcd(b, a % b);
  };
  const a = part.split(":").reduce((acc, time) => 60 * acc + +time);
  const b = total.split(":").reduce((acc, time) => 60 * acc + +time);
  //   console.log(a, b);
  //   console.log(gcd(a, b));
  const c = gcd(a, b);
  //   console.log(a / c, b / c);
  return `${a / c}/${b / c}`;
}

console.log(getCompleted("03:30:30", "05:50:50"));
