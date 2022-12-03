function wrapping(gifts) {
  return gifts.map((gift) => {
    const l = gift.length;
    const wrap = "*".repeat(gift.length + 2);
    return `${wrap}\n*${gift}*\n${wrap}`;
  });
}

console.log(wrapping(["cat", "game", "socks"]));
