/**
 * @param {number[]} candyType
 * @return {number}
 */
var distributeCandies = function(candyType) {
     let max = candyType.length / 2;

    let types_count = new Set(candyType).size;

    if ( types_count <= max ) {
        return types_count;
    } else {
        return max;
    }

};
