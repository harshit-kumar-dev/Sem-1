var arr=[1,2,3,4,5,6,7,12,9,10];
var max=arr[0];
for(var i=1;i<=arr.length;i++){
    if(max<arr[i]) max=arr[i];
}
console.log(max);