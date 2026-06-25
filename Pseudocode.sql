BEGIN
  SET totalLoad = 0
  WHILE totalLoad <= 3000
    DISPLAY "Enter appliance power rating (W):"
    INPUT power
    totalLoad = totalLoad + power
  END WHILE
  DISPLAY "Load limit exceeded!"
  DISPLAY "Final total load = ", totalLoad, " W"
END
