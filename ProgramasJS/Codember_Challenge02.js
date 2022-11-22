const challenge = text => {
  let endText = '';
  for (let i = 0; i < text.length; i += 1) {
    if (text[i] === ' ') {
      endText += ' ';
    } else {
      let a = '0';
      let bool = false;
      let b = parseInt(a);
      // console.log(b);
      while (b < 97 && i < text.length && text[i] !== ' ') {
        a = a + text[i];
        b = parseInt(a);
        i += 1;
        bool = true;
      }
      if (bool) {
        i -= 1;
      }

      // console.log(b);
      //    console.log( String.fromCharCode(b) );
      endText += String.fromCharCode(b);
    }
  }
  console.log(endText);
};

challenge(
  '11610497110107115 102111114 11210897121105110103 9911110010110998101114 11210810197115101 11510497114101',
);
