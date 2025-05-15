function printOdd(arr, index = 0) {
  if (index === arr.length) return;

  if (arr[index] % 2 !== 0) {
    console.log(arr[index]);
  }

  printOdd(arr, index + 1);
}

const arr = [2, 5, 7, 8, 11, 14, 17];
printOdd(arr);
