# Naming Collisions & Namespaces

occurs when two identifiers (variables, functions, etc.) have the same name in the same scope.

can cause compilation errors or unexpected behavior.

## Solution: Use Namespaces

- namespace groups related code to prevent name conflicts.

- Use the namespace keyword to create one.


## Best Practices and Tips

1. use namespaces for large projects to organize code.

2. avoid using namespace std; in global scope—it can lead to conflicts.

3. use std:: before standard library functions instead of using namespace std; to prevent ambiguity.