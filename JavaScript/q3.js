3
var income=600000;
if(income<=250000)console.log("No tax");
else if(income>=250001 && income<=500000)console.log("5% tax");
else if(income>=500001 && income<1000000)console.log("20% tax");
else if(income>=1000000)console.log("30% tax");