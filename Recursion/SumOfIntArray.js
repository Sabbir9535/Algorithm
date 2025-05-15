function sumOfIntArr(arr , index=0){
    if(arr.length ==index){
        return 0;
    }
    else{
        return arr[index]+sumOfIntArr(arr,index+1);
    }
}
let SumOfArray =sumOfIntArr([5,6]);
console.log(SumOfArray);
