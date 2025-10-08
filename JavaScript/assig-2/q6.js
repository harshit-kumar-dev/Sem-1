var arr=[1,2,3,4,5,6,7];
var sumeven=0;
var sumodd=0;
    for(var i=0;i<arr.length;i++){
        if(arr[i]%2==0)
        sumeven++;
        if(arr[i]%2!=0)
        sumodd++;
    }
    console.log(`Total even number: ${sumeven}`);
    console.log(`Total odd number: ${sumodd}`);