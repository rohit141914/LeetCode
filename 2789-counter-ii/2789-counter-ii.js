/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    var s=init;
    return{
        increment:()=>{
            s++;
            return s;
        },
        decrement:()=>{
            s--;
            return s;
        },
        reset:()=>{
            s=init;
            return s;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */