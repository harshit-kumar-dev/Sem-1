var arr=[15,2,3,4,5,6,7,0.5,9,10];
var min=arr[0];
for(var i=1;i<=arr.length;i++){
    if(min>arr[i]) min=arr[i];
}
console.log(min);