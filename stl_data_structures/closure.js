



function closure(intial_value){

	var x = intial_value;

	return {

		increment : function(factor){

			x = x + factor;
			console.log(x);

		}
	}
}


var check_closure = closure(5);

check_closure.increment(10);



// example of call

var person = {

	firstName:"John",
	lastName:"Doe",

	fullName:function(){
		console.log(this.firstName + " " + this.lastName);
	}

}


var _obj = {

	firstName:"Rose",
	lastName:"Mary"
}


person.fullName.call(_obj);

