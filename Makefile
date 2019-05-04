.PHONY: clean All

All:
	@echo "----------Building project:[ Es3_IstrCond2 - Debug ]----------"
	@cd "Es3_IstrCond2" && "$(MAKE)" -f  "Es3_IstrCond2.mk"
clean:
	@echo "----------Cleaning project:[ Es3_IstrCond2 - Debug ]----------"
	@cd "Es3_IstrCond2" && "$(MAKE)" -f  "Es3_IstrCond2.mk" clean
