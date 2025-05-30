.PHONY: clean All

All:
	@echo "----------Building project:[ IHM_Gardian - Debug ]----------"
	@cd "IHM_Gardian" && "$(MAKE)" -f  "IHM_Gardian.mk"
clean:
	@echo "----------Cleaning project:[ IHM_Gardian - Debug ]----------"
	@cd "IHM_Gardian" && "$(MAKE)" -f  "IHM_Gardian.mk" clean
