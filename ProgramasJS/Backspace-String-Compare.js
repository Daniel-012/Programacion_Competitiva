/**
 * Problem: Backspace String Compare
 * Link to problem: https://leetcode.com/problems/backspace-string-compare/
 * Coder: Daniel1209

 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */

const newString = (string) => {
  let accountant = 0;
  let present = 0;
  let newS = [];
  newS = [];

  for (let i = 0; i < string.length; i++) {
    newS.push(true);
  }

  for (let i = 0; i < string.length; i++) {
    if (string[i] === '#') {
      accountant = 0;
      while (i < string.length && string[i] === '#') {
        accountant++;
        i++;
      }
      i--;
      accountant *= 2;
      present = i;
      while (i >= 0 && accountant > 0) {
        if (newS[i] === true) {
          newS[i] = false;
          // console.log(newS[i]);
          accountant--;
        }
        i--;
      }
      i = present;
    }
  }
  let lastModification = [];
  newS.forEach((element, i) => {
    if (element) {
      lastModification += string[i];
    }
  });

  return lastModification;
};

const backspaceCompare = (s, t) => {
  const newS = newString(s);
  const newT = newString(t);

  // console.log(newS);
  // console.log(newT);
  if (newT === newS || newS.length === 0 & newT.length === 0) {
    return true;
  }

  return false;
};
