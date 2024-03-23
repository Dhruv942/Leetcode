/**
 * @param {ListNode} head
 * @return {void} Do not return anything, modify head in-place instead.
 */
var reorderList = function(head) {
    // find middle
	// by moving "fast" twice, we'll have "slow" in the middle
    let slow = head
    let fast = head
    while (fast.next && fast.next.next) {
        slow = slow.next
        fast = fast.next.next
    }

    // reverse second half
	// with reverse linked list solution
    let prev = null
    let cur = slow.next
    while (cur) {
        let temp = cur.next
        cur.next = prev
        prev = cur
        cur = temp
    }

    slow.next = null

    // combine two halves
    let h1 = head
    let h2 = prev

    // if even, second half will be smaller
	while (h2) {
        let temp = h1.next
        h1.next = h2
        h1 = h2
        h2 = temp
    }
};
