function checkPart(part) {
  for (let i = 0; i < part.length; i += 1) {
    const sub = `${part.substring(0, i) + part.substring(i + 1, part.length)}`;
    console.log(sub);
    if (sub === sub.split("").reverse().join()) {
      return true;
    }
  }

  return false;
}

console.log(checkPart("mimu"));
