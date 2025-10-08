var arr=[10,2,3,4,5,6,71,1,9];
var max=-Infinity;
var smax=-Infinity;
for(var i=0;i<arr.length;i++){
    if(max<arr[i]){
        smax=max;
        max=arr[i];
    }
    else if(arr[i]!=max && smax<arr[i]){
        smax=arr[i];
    }
}
console.log(max);
console.log(smax);