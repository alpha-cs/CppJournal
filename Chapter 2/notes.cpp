/**
 * Chapter 2.
 * Part 1: Chapert 2 seems to be consisting of value types and type
 * inheratance. Regular, decimal, signed, unsigned type values
 * and what errors or mistakes can happen if using a combination of them.
 * 
 * Unisgned can never be negative and thus can cause errors when using
 * it in loops or inheritance with other type value. A common error
 * that wont output a copiler error is a wrap around due to 
 * unsigned not entering the negatives and wrapping around.
 */

/**
 * I am choosing to skip doing a cpp main function for this lesson as
 * this chapter main lesson wanted us to define a struct as a temporary
 * method of defining a class since the book has the not thought that yet.
 * The lesson was to the same thing as previous chapter but with the struct
 * and defining the struct to only take 2 isbn input types. No loop for 
 * adding more books of the same and calculating the total.
 */

/**
 * The most important thing I learned in this chapter are #ifndef which basically
 * are header guards. It is good practive to implement these even though
 * classes have not been used yet or even, just as good practive. They check
 * if the header class has been defined if they have then they ignore, if they
 * havent then they #define the class. End with #endif
 * 
 * This chapter goes into details defining what are pointers, references,
 * and constants. It showed different implementation, good practices and
 * common mistackes for all three uses. 
 * 
 * I also learned of 2 data types I never used before. "auto" and "decltype()"
 * which should defin the type automatically. The seem to be pointless for my
 * implications and needs.
 * 
 * Another new thing I learned about are constexpr which is implemented on compile
 * instead on run. I probably need to learn more about this but the main use for this
 * that I can tell is for runnning a huge program and having constant values that you need
 * to do some type of operation on compile time. Since the data they take needs to be
 * defined, it is pointless adding stream data to them. 
 * 
 */