// Last updated: 17/8/2025, 11:33:36 pm
impl Solution {
    pub fn is_match(s: String, p: String) -> bool {
        let s_bytes = s.as_bytes();
        let p_bytes = p.as_bytes();
        let (mut s_idx, mut p_idx) = (0, 0);
        let (mut star_idx, mut s_tmp_idx) = (-1, -1);

        while s_idx < s_bytes.len() {
            // Matching current characters or '?' wildcard
            if p_idx < p_bytes.len() && (p_bytes[p_idx] == b'?' || p_bytes[p_idx] == s_bytes[s_idx]) {
                s_idx += 1;
                p_idx += 1;
            } 
            // Encountering '*', record positions
            else if p_idx < p_bytes.len() && p_bytes[p_idx] == b'*' {
                star_idx = p_idx as isize;
                s_tmp_idx = s_idx as isize;
                p_idx += 1;
            } 
            // Mismatch after '*', backtrack
            else if star_idx != -1 {
                p_idx = (star_idx + 1) as usize;
                s_tmp_idx += 1;
                s_idx = s_tmp_idx as usize;
            } 
            // No match and no previous '*', return false
            else {
                return false;
            }
        }

        // Check for remaining '*' in the pattern
        while p_idx < p_bytes.len() && p_bytes[p_idx] == b'*' {
            p_idx += 1;
        }

        // Return true if the pattern is fully matched
        p_idx == p_bytes.len()
    }
}
