/**
 * @param {string} s
 * @return {boolean}
 */
var checkRecord = function(s) {
        let absenceCount = 0;
    let lateCount = 0; // continuous late count
    
    for (let i = 0; i < s.length; i++) {
        const char = s.charAt(i);
        
        if (char === 'A') absenceCount++;
        
        if (char === "L") lateCount++;
        else lateCount = 0; // reset late count if char is not "L"
        
        if (absenceCount > 1 || lateCount > 2) return false;
    }

    return true;   
};
