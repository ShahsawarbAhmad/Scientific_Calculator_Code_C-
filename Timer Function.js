function startTimer() {
    // Get input from user
    const hours = parseInt(prompt("Enter hours:"));
    const minutes = parseInt(prompt("Enter minutes:"));
    const seconds = parseInt(prompt("Enter seconds:"));
  
    // Calculate total time in seconds
    const totalTimeInSeconds = (hours * 3600) + (minutes * 60) + seconds;
  
    // Set the timer
    setTimeout(function() {
      // Alert the user when the time is up
      alert("Time is up!");
    }, totalTimeInSeconds * 1000); // Multiply by 1000 to convert seconds to milliseconds
  }