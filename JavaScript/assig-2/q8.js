var pos=0;
var zero=0;
var neg=0;
var arr=[1,0,2,-8,3,4,-9,5,6,7];
for(var i=0;i<arr.length;i++){
    if(arr[i]>0) pos++;
    else if(arr[i]<0) neg++;
    else if(arr[i]==0) zero++;
}
console.log(`total positive number: ${pos}`);
console.log(`total negative number: ${neg}`);
console.log(`total zeros: ${zero}`);