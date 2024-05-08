var findRelativeRanks = function(score) {
    let ranks = score.slice(0).sort((a,b)=>b-a)
    return score.map((num, idx) => {
        switch(score[idx]) {
            case ranks[0]:
                return 'Gold Medal'
                break;
            case ranks[1]:
                return 'Silver Medal'
                break;
            case ranks[2]:
                return 'Bronze Medal'
                break
            default: return (ranks.indexOf(num) + 1).toString()
        }
    })
};  
