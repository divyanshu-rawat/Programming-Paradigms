



var max = -1;
var array = [5,7,3,9,1,9];
var array_length = array.length;
var greedy_approach = [];


while(true){

		console.log(array);
		max = -1;
		for( var x = 0; x < array.length; x++){

			if(array[x] > max){
				max = array[x];
				max_index = x;
			}
		}
			greedy_approach.push(max);

			array.splice(max_index,1);

			if(greedy_approach.length == array_length)
				break;
}
	console.log(greedy_approach);
