const fs = require("fs");
const path = require("path");

const dataFilePath = path.join(__dirname, "./data.txt");
const dataFile = fs.readFileSync(dataFilePath, "utf-8");

const change01 = () => {
  const dataArray = dataFile.split("\n\n");
  let usersAccepted = 0;

  for (const data of dataArray) {
    // console.log(data);
    if (
      data.includes("usr") &&
      data.includes("eme") &&
      data.includes("psw") &&
      data.includes("age") &&
      data.includes("loc") &&
      data.includes("fll")
    ) {
      usersAccepted += 1;
      const index = data.indexOf("usr");
      console.log('\n',data, index);
    }
  }

  console.log("Tamaño -=> ", dataArray.length, usersAccepted);
};

change01();
