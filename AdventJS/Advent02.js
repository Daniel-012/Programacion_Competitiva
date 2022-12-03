function countHours(year, holidays) {
  return (
    holidays.filter((holi) => {
      const numDay = new Date(`${year}/${holi}`).getDay();
      if (numDay !== 0 && numDay !== 6) {
        return numDay;
      }
    }).length * 2
  );
}

console.log(countHours(2022, ["01/06", "04/01", "12/25"]));
