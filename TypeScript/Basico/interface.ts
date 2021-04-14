interface IUser {
  name: string;
  password: string;
};

interface IChar {
  nickname: string;
  level: number;
};

type UserInfo = IUser & IChar;

const userInfo: UserInfo = {
  name: 'Rafael',
  password: '123456',
  nickname: 'LopeKillz',
  level: 255
};
