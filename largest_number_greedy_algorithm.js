



var max = -1;
var array = [5,7,3,9,1,9];
var greedy_approach = [];


for( y = 0; y < array.length; y++){

		console.log(array);
		max = -1;
		for( x = 0; x < array.length; x++){

			if(array[x] > max){
				max = array[x];
				max_index = x;
			}
		}

			greedy_approach.push(max);
			array[max_index] = -1;
}
	console.log(greedy_approach);
