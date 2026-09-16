var isValid = function(s) {
    const str = s.split('');
    let check = [];

    for (let i = 0; i < str.length; i++) {
        if (str[i] === '(' || str[i] === '[' || str[i] === '{') {
            check.push(str[i]);
        } else if (str[i] === ')' || str[i] === ']' || str[i] === '}') {
            let last = check.pop();

            if (
                (str[i] === ')' && last !== '(') ||
                (str[i] === ']' && last !== '[') ||
                (str[i] === '}' && last !== '{')
            ) {
                return false; // Mismatch found, return false immediately
            }
        } else {
            return false; // Non-bracket character found, return false immediately
        }
    }

    return check.length === 0; // Return true if all brackets are matched
};
