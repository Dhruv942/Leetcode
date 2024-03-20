/**
 * @param {string} moves
 * @return {boolean}
 */
var judgeCircle = function(moves) {
    let cnt = 0; c = 0;
    for(let i = 0;i < moves.length; i++){
        if(moves[i] == 'L')
        cnt++;
        if(moves[i] == "R")
        cnt--;
        if(moves[i] == "U")
        c++;
        if(moves[i] == 'D')
        c--;
    }
    if(c== 0 && cnt == 0)
    return true;
    return false;

};
