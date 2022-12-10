function countTime(leds) {
    console.log(leds.join('').repeat(2).split('1').sort());
  return leds.join('').repeat(2).split('1').sort().pop().length*7;
}

const leds = [ 1, 1,1];
// const leds =[1, 0, 0, 1, 0, 0];
// const leds = [0, 0, 0, 1];

console.log(countTime(leds));
