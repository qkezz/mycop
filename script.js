let range = [0,1,2,3,4,5,6,7,8,9];

for (let i = 0; i != 10; i++){
    if (range[i] == 0){
        console.log(i, "- zero");
    } else {
        if ((range[i] % 2) == 0){
            console.log(i, "- even");
        } else {
            console.log(i, "- odd");
        }
    }
}
alert('hello world');