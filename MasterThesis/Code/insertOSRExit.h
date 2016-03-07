typedef std::pair<Function *, Function *> OSRPair;
typedef std::vector<Instruction *> OSRCond;
typedef std::vector<Instruction *> InstVector;

/**
 * @brief      Insert and OSR exit at the src instruction.
 *
 * @param      optimized     The from function.
 * @param      toInstrument  The model for the continuation function.
 * @param      src           The instruction at which we insert the exit.
 * @param      condition     The condition to fire the exit.
 * @param  	   compensation	 Global compensation code to execute at OSR Entry.	
 *
 * @return     The optimized function and the continuation created.
 */
static OSRPair insertOSRExit(Function *optimized, Function *toInstrument,
                             Instruction *src, OSRCond condition,
                             InstVector compensation);